const codeFileName = "lista.c"

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

window.addEventListener('scroll', function() {
    const code = document.getElementById('code');
    const mainTextHeight = 80;
    if (window.scrollY > mainTextHeight) {
        code.classList.add('code-scrolled');
    } else {
        code.classList.remove('code-scrolled');
    }
});