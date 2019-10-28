use std::io;

fn main() {
    let mut input = String::new();
    let mut alphabet = vec![];
    alphabet.resize(26, 0);

    io::stdin().read_line(&mut input).unwrap();
    
    for c in input.trim().to_uppercase().chars() {
        alphabet[(c as i32 - 65) as usize] += 1;
    }

    let max = alphabet.iter().map(|z| z).max().unwrap();
    let mut count = 0;
    let mut answer: char = '?';

    for i in 0..26 {
        if alphabet[i] == *max {
            count += 1;
            answer = (65u8 + i as u8) as char;
        }
    }

    match count {
        1 => println!("{}", answer),
        _ => println!("?"),
    }
}