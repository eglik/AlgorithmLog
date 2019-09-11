use std::io;
use std::collections;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let num1: i32;
    let num2: i32;

    let mut iter = input.split_whitespace();

    num1 = iter.next().unwrap().parse::<i32>().unwrap();
    num2 = iter.next().unwrap().parse::<i32>().unwrap();

    println!("{}", num1 + num2);
    println!("{}", num1 - num2);
    println!("{}", num1 * num2);
    println!("{}", num1 / num2);
    println!("{}", num1 % num2);
}