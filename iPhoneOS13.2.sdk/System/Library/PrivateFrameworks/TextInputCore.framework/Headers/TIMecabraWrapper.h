//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TIMecabraWrapper : NSObject
{
    int _inputMethodType;
    struct __Mecabra *_mecabraRef;
}

@property(readonly) struct __Mecabra *mecabraRef; // @synthesize mecabraRef=_mecabraRef;
@property(readonly) int inputMethodType; // @synthesize inputMethodType=_inputMethodType;
- (void)dealloc;
- (id)initWithInputMethodType:(int)arg1 learningDictionaryDirectoryURL:(struct __CFURL *)arg2 creationOptions:(unsigned long long)arg3;

@end

