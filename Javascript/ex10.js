/*
    10.Calcule o volume de uma caixa d'água cilíndrica. 
*/
function volumeCaixaDagua(raio, altura){
    return (Math.PI*Math.pow(raio,2)*altura).toFixed(2);
}
console.log(volumeCaixaDagua(4,6));