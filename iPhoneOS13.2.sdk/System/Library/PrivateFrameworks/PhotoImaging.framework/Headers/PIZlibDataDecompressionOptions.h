//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PIZlibDataDecompressionOptions : NSObject
{
    _Bool _decompressAllAtOnce;
    int _windowBits;
    id /* block */ _createBuffer;
    id /* block */ _growData;
}

+ (id)defaultOptions;
@property(nonatomic) _Bool decompressAllAtOnce; // @synthesize decompressAllAtOnce=_decompressAllAtOnce;
@property(copy, nonatomic) id /* block */ growData; // @synthesize growData=_growData;
@property(copy, nonatomic) id /* block */ createBuffer; // @synthesize createBuffer=_createBuffer;
@property(nonatomic) int windowBits; // @synthesize windowBits=_windowBits;

@end

