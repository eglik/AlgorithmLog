use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let mut count = 0;
    
    for c in input.trim().chars() {
        match c {
            'A'..='C' => count += 3,
            'D'..='F' => count += 4,
            'G'..='I' => count += 5,
            'J'..='L' => count += 6,
            'M'..='O' => count += 7,
            'P'..='S' => count += 8,
            'T'..='V' => count += 9,
            'W'..='Z' => count += 10,
            _ => println!("?"),
        }
    }

    println!("{}", count);
}