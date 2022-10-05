/*
    2.Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. 
    Faça um algoritmo para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit 
    (pesquise como fazer este tipo de conversão). 
*/

function CelsiusToFahrenheit(temp){
    //formula de conversao (°C × 9/5) + 32 = °F
    return (temp*(9/5)) +32;
}
console.log(CelsiusToFahrenheit(35))