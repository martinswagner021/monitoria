const codeFileName = "main-code.c"

document.addEventListener('DOMContentLoaded', () => {
    const codeHTML = document.getElementById("code-content")
    fetch("./samples/" + codeFileName)
    .then(res => res.text())
    .then(text => {
        codeHTML.innerHTML = text;
    })
    .then(() => {
        hljs.highlightAll()
    })
})