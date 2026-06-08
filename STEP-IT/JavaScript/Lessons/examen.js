fetch("https://rickandmortyapi.com/api/character")
    .then(res => res.json())
    .then(data => {
        const app = document.getElementById("app");

        data.results.forEach(c => {
            app.innerHTML += `
                <div class="card">
                    <img src="${c.image}" width="150">
                    <h3>${c.name}</h3>
                    <p>Status: ${c.status}</p>
                    <p>Species: ${c.species}</p>
                    <p>Gender: ${c.gender}</p>
                    <p>Origin: ${c.origin.name}</p>
                </div>
            `;
        });
    })
    .catch(err => console.log(err));