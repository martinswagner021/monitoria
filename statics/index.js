const codeFileName = "index.c"

document.addEventListener('DOMContentLoaded', () => {
    const codeHTML = document.getElementById("code-content")
    fetch("./samples/" + codeFileName)
    .then(res => res.text())
    .then(text => {
        codeHTML.textContent = text;
    })
    .then(() => {
        hljs.highlightAll()
    })
})