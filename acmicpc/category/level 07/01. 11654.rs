use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let mut ascii = input.trim().chars();
    
    println!("{}", ascii.next().unwrap() as i32);
}