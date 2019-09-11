use std::io;
use std::collections;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).expect("Error");

    let mut vec = Vec::new();

    let mut number = 0;

    for s in input.split_whitespace() {
        number = s.trim().parse::<i32>().expect("Not a Number");
    }

    input.clear();

    io::stdin().read_line(&mut input).expect("Error");

    for s in input.split_whitespace() {
        if s.trim().parse::<i32>().expect("Not a Number") < number {
            vec.push(s.trim().parse::<i32>().expect("Not a Number"));
        }
    }

    for v in vec {
        print!("{} ", v);
    }
}