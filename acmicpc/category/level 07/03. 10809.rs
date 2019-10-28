use std::io;

fn main() {
    let mut input = String::new();
    let mut alphabet = vec![];
    alphabet.resize(26, -1);

    io::stdin().read_line(&mut input).unwrap();

    let mut count = 0;

    for i in input.trim().chars() {
        let index = i as i32 - 97;

        if alphabet[index as usize] == -1 {
            alphabet[index as usize] = count;
        }

        count += 1;
    }

    for c in alphabet {
        print!("{} ", c);
    }
}