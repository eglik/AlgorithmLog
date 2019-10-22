use std::io;
use std::cmp::Ordering;

fn main() {
    let mut score = String::new();

    io::stdin().read_line(&mut score).unwrap();

    let mut iter = score.split_whitespace();

    let a = iter.next().unwrap().parse::<i32>().unwrap();
    let b = iter.next().unwrap().parse::<i32>().unwrap();

    match a.cmp(&b) {
        Ordering::Equal => println!("=="),
        Ordering::Greater => println!(">"),
        Ordering::Less => println!("<"),
    }
}