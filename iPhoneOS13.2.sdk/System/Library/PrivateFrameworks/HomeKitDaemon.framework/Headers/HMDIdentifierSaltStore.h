//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSData;

@interface HMDIdentifierSaltStore : NSObject
{
    HMFUnfairLock *_lock;
    NSData *_identifierSalt;
    NSData *_assistantIdentifierSalt;
}

@property(retain, nonatomic) NSData *assistantIdentifierSalt; // @synthesize assistantIdentifierSalt=_assistantIdentifierSalt;
@property(retain, nonatomic) NSData *identifierSalt; // @synthesize identifierSalt=_identifierSalt;
- (id)init;

@end

