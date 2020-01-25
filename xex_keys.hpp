#pragma once

// Various encryption keys used to decrypt XEX image key
// There's no indication inside the XEX which key is used though :(
// Only way to know is to try decrypting and check if the resulting data is valid
const uint8_t retail_key[16] = {
  0x20, 0xB1, 0x85, 0xA5, 0x9D, 0x28, 0xFD, 0xC3,
  0x40, 0x58, 0x3F, 0xBB, 0x08, 0x96, 0xBF, 0x91
};
const uint8_t devkit_key[16] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// unsure if any of the xex1 keys get used, we'll still try them as last resort anyway
const uint8_t retail_key_xex1[16] = {
  0xA2, 0x6C, 0x10, 0xF7, 0x1F, 0xD9, 0x35, 0xE9,
  0x8B, 0x99, 0x92, 0x2C, 0xE9, 0x32, 0x15, 0x72
};
const uint8_t devkit_key_xex1[16] = {
  0xA8, 0xB0, 0x05, 0x12, 0xED, 0xE3, 0x63, 0x8D,
  0xC6, 0x58, 0xB3, 0x10, 0x1F, 0x9F, 0x50, 0xD1
};

const uint8_t* key_bytes[4] = {
  retail_key,
  devkit_key,
  retail_key_xex1,
  devkit_key_xex1
};
const char* key_names[4] = {
  "retail",
  "devkit",
  "retail-XEX1",
  "devkit-XEX1"
};

const uint8_t pirs_retail_public[] = {
    0x00, 0x00, 0x00, 0x20, // cqw
    0x00, 0x00, 0x00, 0x03, // dwPubExp
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // qwReserved
    // aqwM
    0xE6, 0x3B, 0x32, 0xB2, 0x8D, 0x9E, 0x9E, 0xE7, 0x9D, 0xFC, 0x5C, 0x72, 0x41, 0x94, 0x58, 0x47,
    0xDE, 0x0D, 0x18, 0x40, 0x72, 0xD6, 0xE3, 0x46, 0x8E, 0xBA, 0x8E, 0xBC, 0x1A, 0x90, 0xAC, 0x20,
    0xBA, 0x03, 0x85, 0xB5, 0x1A, 0x3E, 0x25, 0xF9, 0xA6, 0x58, 0xEB, 0xB6, 0xA3, 0xC4, 0xA3, 0xEE,
    0xB2, 0xB0, 0xAE, 0x97, 0x69, 0xEB, 0xFE, 0x71, 0xFC, 0x02, 0xAB, 0x77, 0xBA, 0xC8, 0xE6, 0x74,
    0xE6, 0x7C, 0x63, 0x0E, 0xAF, 0x4C, 0xF7, 0xE7, 0x11, 0x4A, 0x80, 0x24, 0x72, 0x05, 0x7A, 0x63,
    0xD0, 0xF8, 0x91, 0x02, 0xA6, 0xE7, 0x7D, 0x77, 0xC5, 0xA7, 0x9B, 0x08, 0x11, 0x2E, 0xA0, 0x64,
    0x45, 0x60, 0x46, 0xBC, 0x36, 0xE1, 0x17, 0x71, 0xBE, 0x66, 0x49, 0x2F, 0xAE, 0x20, 0xA4, 0x76,
    0x9C, 0x27, 0x51, 0xCF, 0x4B, 0x34, 0x7A, 0x35, 0xBC, 0xA4, 0xAA, 0x1C, 0x47, 0x4B, 0xF4, 0x97,
    0x22, 0x4E, 0x13, 0x24, 0xD3, 0xC1, 0x57, 0xDF, 0x4D, 0x84, 0xB9, 0x18, 0x97, 0x99, 0xAC, 0x00,
    0xB3, 0x3D, 0x03, 0x25, 0x60, 0xC8, 0x7A, 0x59, 0xFE, 0x48, 0xFF, 0x28, 0x3D, 0x10, 0xBB, 0x9E,
    0x09, 0x06, 0x2A, 0x61, 0x20, 0x2C, 0xF8, 0x72, 0xEB, 0x87, 0xE6, 0xD1, 0xFB, 0xB3, 0x66, 0xFC,
    0x4A, 0x02, 0xAE, 0xD4, 0xD8, 0x37, 0xCF, 0xA6, 0x32, 0x25, 0x79, 0x36, 0x0E, 0xF4, 0xED, 0x19,
    0xA2, 0x10, 0x27, 0x96, 0x2F, 0x9F, 0xA9, 0x3D, 0xA4, 0x37, 0x30, 0x11, 0x51, 0x83, 0xBD, 0xF7,
    0xC7, 0xE5, 0xCE, 0xAA, 0xEC, 0xDE, 0x48, 0xA0, 0x84, 0xF7, 0xB0, 0xF6, 0x4B, 0x8E, 0xF0, 0x89,
    0xBD, 0x47, 0x7C, 0x90, 0xDD, 0x88, 0x12, 0x17, 0x40, 0xD2, 0x4E, 0xA6, 0xC6, 0x11, 0x04, 0x1B,
    0x57, 0xA8, 0x68, 0xB4, 0x61, 0xF4, 0x1B, 0xC6, 0x8B, 0xE8, 0xD9, 0x20, 0xF2, 0x05, 0xE0, 0x70
};

const uint8_t pirs_devkit_public[] = {
    0x00, 0x00, 0x00, 0x20, // cqw
    0x00, 0x00, 0x00, 0x03, // dwPubExp
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // qwReserved
    // aqwM
    0xBF, 0x7F, 0xC1, 0xB1, 0x13, 0x2F, 0x49, 0xD7, 0x02, 0x00, 0xFA, 0x1C, 0xE5, 0x33, 0x5B, 0x2C,
    0x07, 0x81, 0x64, 0x71, 0x16, 0x88, 0x9D, 0xBB, 0xB8, 0xC0, 0xF5, 0x78, 0xC2, 0xA7, 0xE9, 0xA6,
    0x02, 0x60, 0x99, 0x0A, 0x9B, 0x41, 0xB7, 0xD4, 0x29, 0xAC, 0x7B, 0xCC, 0x1A, 0x27, 0x95, 0x7F,
    0x93, 0x68, 0x4B, 0xC7, 0x8A, 0x1A, 0x60, 0x16, 0xBB, 0xCC, 0x13, 0x25, 0xED, 0x08, 0x8C, 0xED,
    0x05, 0xC8, 0xEC, 0xB3, 0xCF, 0xA4, 0xC2, 0x9E, 0xFC, 0x6E, 0xA5, 0xAD, 0x4D, 0xD0, 0x18, 0x9F,
    0x76, 0xA4, 0x6F, 0x9E, 0xF9, 0x4C, 0x48, 0xB0, 0xD2, 0x2A, 0x10, 0x44, 0x65, 0x22, 0x54, 0x40,
    0xB3, 0x9C, 0x28, 0xF2, 0x7B, 0x66, 0x87, 0xD5, 0xED, 0x3E, 0xF3, 0xAA, 0x63, 0xDA, 0x07, 0x72,
    0x7C, 0x89, 0xA7, 0x91, 0x3D, 0xD8, 0xBC, 0x1E, 0x90, 0xDB, 0xAB, 0x22, 0xD0, 0x8B, 0x4E, 0x66,
    0x66, 0x48, 0xF9, 0x1C, 0xEA, 0x39, 0xA0, 0xEF, 0x97, 0xF2, 0xE3, 0xD0, 0x59, 0x45, 0xBC, 0x7D,
    0x1B, 0xC8, 0x51, 0x84, 0xC5, 0x8D, 0xF4, 0x44, 0x49, 0xB9, 0x6E, 0xC5, 0x42, 0x81, 0x3A, 0x4E,
    0xC2, 0x39, 0x80, 0x8E, 0x1A, 0xF5, 0xE0, 0xB0, 0xDB, 0x71, 0x6E, 0x3B, 0xF1, 0xA3, 0xD9, 0xB8,
    0x4D, 0x90, 0xBD, 0xE8, 0xF8, 0x0F, 0x91, 0x56, 0x6C, 0xAA, 0x43, 0xA7, 0xC5, 0xD0, 0xBE, 0xCC,
    0x6B, 0x4C, 0x8C, 0x98, 0x65, 0x85, 0x5D, 0x4C, 0x3D, 0x1B, 0x8F, 0xBE, 0xC0, 0x5C, 0x70, 0xB8,
    0x3A, 0x76, 0x30, 0x73, 0xFD, 0x97, 0x5D, 0x6D, 0x27, 0x93, 0xBE, 0xE6, 0x61, 0x70, 0x76, 0xE1,
    0x99, 0xAD, 0xA2, 0x4A, 0x62, 0x70, 0x06, 0x3E, 0x1E, 0xAE, 0xDB, 0xE4, 0x2E, 0xAB, 0xE7, 0x84,
    0xE5, 0xAC, 0x99, 0x73, 0x6C, 0x4E, 0x2F, 0x64, 0x6B, 0xA0, 0xBF, 0xC8, 0x77, 0x35, 0x1C, 0xC9
};

const uint8_t pirs_devkit_private[] = {
    0x00, 0x00, 0x00, 0x20, // cqw
    0x00, 0x00, 0x00, 0x03, // dwPubExp
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // qwReserved
    // aqwM
    0xC9, 0x1C, 0x35, 0x77, 0xC8, 0xBF, 0xA0, 0x6B, 0x64, 0x2F, 0x4E, 0x6C, 0x73, 0x99, 0xAC, 0xE5,
    0x84, 0xE7, 0xAB, 0x2E, 0xE4, 0xDB, 0xAE, 0x1E, 0x3E, 0x06, 0x70, 0x62, 0x4A, 0xA2, 0xAD, 0x99,
    0xE1, 0x76, 0x70, 0x61, 0xE6, 0xBE, 0x93, 0x27, 0x6D, 0x5D, 0x97, 0xFD, 0x73, 0x30, 0x76, 0x3A,
    0xB8, 0x70, 0x5C, 0xC0, 0xBE, 0x8F, 0x1B, 0x3D, 0x4C, 0x5D, 0x85, 0x65, 0x98, 0x8C, 0x4C, 0x6B,
    0xCC, 0xBE, 0xD0, 0xC5, 0xA7, 0x43, 0xAA, 0x6C, 0x56, 0x91, 0x0F, 0xF8, 0xE8, 0xBD, 0x90, 0x4D,
    0xB8, 0xD9, 0xA3, 0xF1, 0x3B, 0x6E, 0x71, 0xDB, 0xB0, 0xE0, 0xF5, 0x1A, 0x8E, 0x80, 0x39, 0xC2,
    0x4E, 0x3A, 0x81, 0x42, 0xC5, 0x6E, 0xB9, 0x49, 0x44, 0xF4, 0x8D, 0xC5, 0x84, 0x51, 0xC8, 0x1B,
    0x7D, 0xBC, 0x45, 0x59, 0xD0, 0xE3, 0xF2, 0x97, 0xEF, 0xA0, 0x39, 0xEA, 0x1C, 0xF9, 0x48, 0x66,
    0x66, 0x4E, 0x8B, 0xD0, 0x22, 0xAB, 0xDB, 0x90, 0x1E, 0xBC, 0xD8, 0x3D, 0x91, 0xA7, 0x89, 0x7C,
    0x72, 0x07, 0xDA, 0x63, 0xAA, 0xF3, 0x3E, 0xED, 0xD5, 0x87, 0x66, 0x7B, 0xF2, 0x28, 0x9C, 0xB3,
    0x40, 0x54, 0x22, 0x65, 0x44, 0x10, 0x2A, 0xD2, 0xB0, 0x48, 0x4C, 0xF9, 0x9E, 0x6F, 0xA4, 0x76,
    0x9F, 0x18, 0xD0, 0x4D, 0xAD, 0xA5, 0x6E, 0xFC, 0x9E, 0xC2, 0xA4, 0xCF, 0xB3, 0xEC, 0xC8, 0x05,
    0xED, 0x8C, 0x08, 0xED, 0x25, 0x13, 0xCC, 0xBB, 0x16, 0x60, 0x1A, 0x8A, 0xC7, 0x4B, 0x68, 0x93,
    0x7F, 0x95, 0x27, 0x1A, 0xCC, 0x7B, 0xAC, 0x29, 0xD4, 0xB7, 0x41, 0x9B, 0x0A, 0x99, 0x60, 0x02,
    0xA6, 0xE9, 0xA7, 0xC2, 0x78, 0xF5, 0xC0, 0xB8, 0xBB, 0x9D, 0x88, 0x16, 0x71, 0x64, 0x81, 0x07,
    0x2C, 0x5B, 0x33, 0xE5, 0x1C, 0xFA, 0x00, 0x02, 0xD7, 0x49, 0x2F, 0x13, 0xB1, 0xC1, 0x7F, 0xBF,
    0x4D, 0x4D, 0x16, 0x27, 0x77, 0x9E, 0x3C, 0x97, 0x2D, 0xBE, 0x03, 0x13, 0xCB, 0x82, 0x9E, 0x5D,
    0x9F, 0xA8, 0x1C, 0x79, 0x6E, 0x40, 0x9F, 0x29, 0x76, 0x46, 0xA9, 0xB4, 0xC9, 0xFA, 0x6F, 0xA4,
    0x5B, 0xCD, 0x1C, 0x49, 0x7B, 0x4E, 0xCC, 0xB3, 0xFF, 0xC8, 0x1F, 0x08, 0x03, 0x34, 0x2D, 0x90,
    0x7F, 0x39, 0x41, 0xA3, 0x47, 0x64, 0x95, 0xD1, 0x18, 0xB7, 0x7C, 0x8D, 0x52, 0x04, 0x0F, 0xDF,
    0xB4, 0x03, 0xB0, 0x24, 0x65, 0xFA, 0x7F, 0xF3, 0xEA, 0x48, 0xB3, 0xA5, 0xCB, 0x30, 0xE9, 0x9F,
    0x72, 0x73, 0xC4, 0x3A, 0x7A, 0xC8, 0xAA, 0x05, 0x48, 0x1D, 0xD1, 0x73, 0xEF, 0xFF, 0xF3, 0xE8,
    0xFD, 0x50, 0x4E, 0xC5, 0xE8, 0x6E, 0x74, 0x55, 0x08, 0x0B, 0xE2, 0xE8, 0x11, 0x0A, 0x4B, 0x01,
    0xE0, 0x64, 0xCE, 0x0D, 0x6C, 0x4B, 0x49, 0xA0, 0xF7, 0x5B, 0x98, 0x10, 0x62, 0x49, 0x5F, 0x19,
    0xEF, 0x3A, 0xAF, 0xB9, 0x5D, 0x35, 0xB1, 0x4D, 0xDB, 0x82, 0xE4, 0x77, 0x4D, 0xCA, 0x8A, 0x34,
    0x4B, 0x1D, 0xCF, 0xCF, 0x32, 0xCE, 0x0D, 0x9D, 0x50, 0x3A, 0xA0, 0x68, 0x23, 0xD8, 0x80, 0x72,
    0xE3, 0xCD, 0xB6, 0xB6, 0xE1, 0xD9, 0x2A, 0x26, 0xCC, 0x3C, 0xA7, 0x17, 0x9E, 0x05, 0xD4, 0xAA,
    0x6E, 0xD5, 0x61, 0x6A, 0x64, 0x68, 0x59, 0x80, 0xD2, 0x1C, 0xD0, 0x8C, 0xD8, 0xD4, 0x92, 0xBD,
    0x84, 0xAD, 0xE7, 0x54, 0x92, 0x13, 0x7A, 0x9E, 0x92, 0x8A, 0x8C, 0x6E, 0xF6, 0x5D, 0x29, 0xE4,
    0xB9, 0xEB, 0x51, 0x34, 0xB6, 0xE5, 0x0B, 0x67, 0x41, 0x43, 0x45, 0x45, 0xB8, 0x5E, 0x25, 0x73,
    0x6D, 0xF3, 0x11, 0x12, 0x79, 0xCB, 0xE6, 0x9F, 0x4F, 0xA1, 0x91, 0xCA, 0x3E, 0x9F, 0x2D, 0xDF,
    0x34, 0x2F, 0x23, 0x32, 0x86, 0xB4, 0x3E, 0x10, 0xDE, 0xCE, 0xBB, 0xD8, 0x86, 0x85, 0x0E, 0xF0,
    0xDE, 0x33, 0x64, 0x1A, 0x4F, 0xBE, 0xD3, 0x0F, 0x1E, 0x7E, 0xAC, 0xB7, 0xDD, 0x01, 0xBE, 0xE8,
    0xBF, 0xC5, 0x68, 0x50, 0xF4, 0x2B, 0x14, 0xC6, 0xA4, 0x2F, 0x1B, 0xCD, 0xDB, 0xFC, 0x4A, 0x6D,
    0x92, 0x88, 0xBD, 0x86, 0x52, 0x34, 0x88, 0x77, 0xFF, 0xDA, 0xBF, 0x5A, 0xAC, 0xCD, 0x73, 0xB5,
    0x54, 0xD0, 0xD6, 0x6C, 0xDA, 0x43, 0x0E, 0x8B, 0x65, 0xCF, 0xA8, 0x5E, 0x36, 0xAD, 0x5F, 0xEA,
    0xCD, 0x57, 0xCA, 0xC2, 0xEE, 0xA6, 0xFF, 0xF7, 0xF1, 0x85, 0xCD, 0x19, 0x32, 0x20, 0x9B, 0xBF,
    0x4C, 0x4D, 0x2D, 0x7C, 0x51, 0xDB, 0x1C, 0x03, 0xDA, 0xBE, 0x8B, 0xA2, 0x9F, 0xFF, 0xF7, 0xF0,
    0xFE, 0x35, 0x89, 0xD9, 0x45, 0x9E, 0xF8, 0x38, 0xB0, 0x07, 0xEC, 0x9A, 0xB6, 0x06, 0xDC, 0xAB,
    0xEA, 0xED, 0xDE, 0xB3, 0x9D, 0x87, 0x86, 0x6A, 0xA4, 0xE7, 0xBA, 0xB5, 0x96, 0xDB, 0x94, 0xBB,
    0x4A, 0x27, 0x1F, 0xD0, 0xE8, 0xCE, 0x76, 0x33, 0x92, 0x57, 0x42, 0xFA, 0x33, 0xDC, 0x5C, 0x23,
    0xDC, 0xBE, 0x8A, 0x8A, 0x21, 0xDE, 0xB3, 0xBE, 0x35, 0x7C, 0x6A, 0xF0, 0x17, 0xE5, 0xAA, 0xF6,
    0xED, 0x33, 0xCF, 0x24, 0x96, 0x90, 0xC6, 0xC4, 0xDD, 0x7D, 0xC4, 0xBA, 0x69, 0x59, 0x38, 0x71,
    0x49, 0xE3, 0x96, 0x46, 0xED, 0x9A, 0xE6, 0x55, 0x36, 0xBD, 0xE0, 0x5D, 0xE5, 0xE3, 0x0C, 0x7E,
    0x03, 0x1E, 0x9A, 0x38, 0x61, 0x62, 0x51, 0xBF, 0xB7, 0x07, 0x08, 0x49, 0xF9, 0x93, 0x71, 0x43,
    0x26, 0x9C, 0xE0, 0xCD, 0xCF, 0x43, 0x5C, 0xEF, 0x2B, 0x82, 0x2E, 0x2E, 0x7A, 0xE9, 0x6E, 0x4D,
    0xF3, 0xF7, 0x60, 0xB6, 0xFB, 0xDD, 0x44, 0x6A, 0x8A, 0x6B, 0xB6, 0x86, 0xD4, 0x6A, 0x1E, 0x94,
    0x78, 0x1F, 0x6C, 0xCC, 0x59, 0xCD, 0x7E, 0xB5, 0x94, 0x89, 0xD2, 0x90, 0x59, 0xAE, 0x09, 0xF5,
    0xC9, 0xA2, 0xB3, 0xAE, 0xDE, 0x77, 0x71, 0xFA, 0x39, 0xF7, 0x89, 0x93, 0xBB, 0x6A, 0xA9, 0x3C,
    0x8D, 0x79, 0xE3, 0x3D, 0x35, 0x06, 0x0F, 0x76, 0x2D, 0xA5, 0x8B, 0xCC, 0x4D, 0xAF, 0xDF, 0xFC,
    0xD3, 0x03, 0xBB, 0xA4, 0xA0, 0x51, 0x80, 0x58, 0x3C, 0xCF, 0x62, 0xE3, 0x09, 0xBC, 0x63, 0x9E,
    0xB3, 0xEF, 0x29, 0x41, 0x55, 0x23, 0x0B, 0x2A, 0x2A, 0x31, 0xB8, 0xDA, 0xD6, 0x13, 0xE4, 0xBE,
    0xAB, 0xCA, 0x58, 0xBF, 0x24, 0xB5, 0x60, 0xD2, 0xB7, 0x9E, 0x00, 0x30, 0x15, 0xFD, 0xFA, 0x05,
    0xA7, 0x5C, 0x3B, 0x44, 0x78, 0xBA, 0x5B, 0x91, 0x2C, 0xB4, 0x16, 0x16, 0x3A, 0x6E, 0xBA, 0x40,
    0x15, 0xA2, 0xB3, 0x61, 0x05, 0xCB, 0xC6, 0xC0, 0x86, 0x92, 0xD9, 0x57, 0x34, 0x92, 0x15, 0x86,
    0x79, 0x21, 0xBB, 0x43, 0xE6, 0xFC, 0xA4, 0xC8, 0x75, 0x8D, 0x75, 0x1B, 0x93, 0x53, 0xDD, 0xF4
};