use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let iter = input.split_whitespace().unwarp();

    iter().next()
}