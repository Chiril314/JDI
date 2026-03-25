const tracks = [
  {
    title: "Metallica - Nothing Else Matters",
    audioFile: "Metallica_Nothing-Else-Matters.mp3",
    cover: "metallica.png",
  },
  {
    title: "Nirvana - The Man Who Sold The World",
    audioFile: "Nirvana_The-Man-Who-Sold-The-World.mp3",
    cover: "nirvana.png",
  },
  {
    title: "Sting - Shape Of My Heart",
    audioFile: "Sting_Shape-of-My-Heart.mp3",
    cover: "sting.png",
  },
];

const trackCover = document.querySelector("#track-cover");
const trackTitle = document.querySelector("#track-title");
const track = document.querySelector("#track");

const prevBtn = document.querySelector("#prev-track");
const playBtn = document.querySelector("#play-track");
const nextBtn = document.querySelector("#next-track");

const progress = document.querySelector("#progress");
const currentTimeEl = document.querySelector("#current-time");
const durationEl = document.querySelector("#duration");

let currentTrack = 0;

loadTrack(currentTrack);

playBtn.addEventListener("click", togglePlay);
nextBtn.addEventListener("click", () => goNext(true));
prevBtn.addEventListener("click", () => goPrev(true));
track.addEventListener("ended", () => goNext(true));

track.addEventListener("loadedmetadata", () => {
  durationEl.textContent = formatTime(track.duration);
});

track.addEventListener("timeupdate", () => {
  if (!track.duration) return;

  const percent = (track.currentTime / track.duration) * 100;
  progress.value = percent;

  currentTimeEl.textContent = formatTime(track.currentTime);
});

progress.addEventListener("input", () => {
  if (!track.duration) return;
  const newTime = (progress.value / 100) * track.duration;
  track.currentTime = newTime;
});

function loadTrack(idx) {
  trackCover.src = `images/${tracks[idx].cover}`;
  trackCover.alt = tracks[idx].title;
  trackTitle.textContent = tracks[idx].title;
  track.src = `audio-files/${tracks[idx].audioFile}`;

  progress.value = 0;
  currentTimeEl.textContent = "0:00";
  durationEl.textContent = "0:00";
}

function togglePlay() {
  if (track.paused) {
    track.play();
    playBtn.innerHTML = '<i class="fa-solid fa-pause"></i>';
  } else {
    track.pause();
    playBtn.innerHTML = '<i class="fa-solid fa-play"></i>';
  }
}

function goNext(autoplay) {
  currentTrack = (currentTrack + 1) % tracks.length;
  loadTrack(currentTrack);
  if (autoplay) {
    track.play();
    playBtn.innerHTML = '<i class="fa-solid fa-pause"></i>';
  }
}

function goPrev(autoplay) {
  currentTrack = (currentTrack - 1 + tracks.length) % tracks.length;
  loadTrack(currentTrack);
  if (autoplay) {
    track.play();
    playBtn.innerHTML = '<i class="fa-solid fa-pause"></i>';
  }
}

function formatTime(seconds) {
  if (!Number.isFinite(seconds)) return "0:00";
  const m = Math.floor(seconds / 60);
  const s = Math.floor(seconds % 60);
  return `${m}:${String(s).padStart(2, "0")}`;
}