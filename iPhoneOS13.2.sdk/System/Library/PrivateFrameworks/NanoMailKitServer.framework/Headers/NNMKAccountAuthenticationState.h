//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NNMKAccountAuthenticationState : NSObject
{
    NSString *_accountId;
    unsigned long long _state;
    NSString *_displayName;
    NSString *_subsectionId;
}

@property(retain, nonatomic) NSString *subsectionId; // @synthesize subsectionId=_subsectionId;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;

@end

