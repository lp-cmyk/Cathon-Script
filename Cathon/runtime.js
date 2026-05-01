// JS 运行辅助
function log(msg) {
    console.log(msg);
}
function loadFile(url) {
    return fetch(url).then(r=>r.text());
}