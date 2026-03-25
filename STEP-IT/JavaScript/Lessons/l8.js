const noteForm = document.getElementById("noteForm");
const noteTitle = document.getElementById("noteTitle");
const noteContent = document.getElementById("noteContent");
const notesList = document.getElementById("notesList");
const notesCount = document.getElementById("notesCount");
const dateTime = document.getElementById("dateTime");
const welcomePopup = document.getElementById("welcomePopup");
const closePopup = document.getElementById("closePopup");

const STORAGE_KEY = "myAgendaNotes";

function getNotes(){
    const notes = localStorage.getItem(STORAGE_KEY);
    return notes ? JSON.parse(notes) : [];
}

function saveNotes(notes){
  localStorage.setItem(STORAGE_KEY, JSON.stringify(notes));
}

function updateDateTime(){
    const now = new Date();

    const formatted = now.toLocaleString("ro-RO", {
        dateStyle: "full",
        timeStyle: "medium"
    });

    dateTime.textContent = formatted;
}

setInterval(updateDateTime, 1000);
updateDateTime();

function renderNotes(){
    const notes = getNotes();
    notesList.innerHTML = "";

    notesCount.textContent = `${notes.length} ${notes.length === 1 ? "notiță" : "notițe"}`;

    if (notes.length === 0) {
        notesList.innerHTML = `
        <div class="empty-state">
            Nu există notițe încă. Adaugă prima ta notiță.
        </div>
        `;
        return;
    }

    notes
    .slice()
    .reverse()
    .forEach((note) => {
        const noteCard = document.createElement("article");
        noteCard.className = "note-card";

        noteCard.innerHTML = `
            <h3 class="note-title">${escapeHTML(note.title)}</h3>
            <p class="note-content">${escapeHTML(note.content)}</p>
            <div class="note-meta">
            Creată la: ${note.createdAt}
            </div>
            <div class="note-actions">
            <button class="btn-download" data-id="${note.id}">Descarcă</button>
            <button class="btn-delete" data-id="${note.id}">Șterge</button>
            </div>
        `;

        notesList.appendChild(noteCard);
    });

  attachNoteActions();
}

noteForm.addEventListener("submit", function (event){
    event.preventDefault();

    const title = noteTitle.value.trim();
    const content = noteContent.value.trim();

    if(!title || !content) 
        return;

    const now = new Date();
    const createdAt = now.toLocaleString("ro-RO", {
        dateStyle: "short",
        timeStyle: "medium"
    });

    const newNote = {
        id: Date.now(),
        title,
        content,
        createdAt
    };

    const notes = getNotes();
    notes.push(newNote);
    saveNotes(notes);

    noteForm.reset();
    renderNotes();
});

function attachNoteActions(){
    const deleteButtons = document.querySelectorAll(".btn-delete");
    const downloadButtons = document.querySelectorAll(".btn-download");

    deleteButtons.forEach((button) => {
        button.addEventListener("click", function () {
        const id = Number(this.dataset.id);
        deleteNote(id);
        });
    });

    downloadButtons.forEach((button) => {
        button.addEventListener("click", function () {
        const id = Number(this.dataset.id);
        downloadNote(id);
        });
    });
}

function deleteNote(id){
    const notes = getNotes();
    const filteredNotes = notes.filter((note) => note.id !== id);
    saveNotes(filteredNotes);
    renderNotes();
}

function downloadNote(id){
  const notes = getNotes();
  const note = notes.find((item) => item.id === id);

    if(!note) 
        return;

    const content = `Titlu: ${note.title}
Creată la: ${note.createdAt}

Conținut:
${note.content}
`;

    const blob = new Blob([content], { type: "text/plain;charset=utf-8" });
    const url = URL.createObjectURL(blob);

    const link = document.createElement("a");
    link.href = url;
    link.download = `${sanitizeFileName(note.title)}.txt`;
    document.body.appendChild(link);
    link.click();
    document.body.removeChild(link);

    URL.revokeObjectURL(url);
}

if(closePopup && welcomePopup){
    closePopup.addEventListener("click", function (){
        welcomePopup.style.display = "none";
    });
}

function sanitizeFileName(fileName){
  return fileName.replace(/[<>:"/\\|?*]+/g, "_").trim() || "notita";
}

function escapeHTML(str){
    return str
    .replace(/&/g, "&amp;")
    .replace(/</g, "&lt;")
    .replace(/>/g, "&gt;");
}

renderNotes();