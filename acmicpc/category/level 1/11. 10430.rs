use std::io;
use std::collections;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let a: i32;
    let b: i32;
    let c: i32;

    let mut iter = input.split_whitespace();

    a = iter.next().unwrap().parse::<i32>().unwrap();
    b = iter.next().unwrap().parse::<i32>().unwrap();
    c = iter.next().unwrap().parse::<i32>().unwrap();
    
    println!("{}", (a+b)%c);
    println!("{}", (a%c+b%c)%c);
    println!("{}", (a*b)%c);
    println!("{}", (a%c*b%c)%c);
}