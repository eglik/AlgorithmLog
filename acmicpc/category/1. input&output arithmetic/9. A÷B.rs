use std::io;
use std::collections;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let num1: f64;
    let num2: f64;

    let mut iter = input.split_whitespace();

    num1 = iter.next().unwrap().parse::<f64>().unwrap();
    num2 = iter.next().unwrap().parse::<f64>().unwrap();

    println!("{:.10}", num1 / num2)
}