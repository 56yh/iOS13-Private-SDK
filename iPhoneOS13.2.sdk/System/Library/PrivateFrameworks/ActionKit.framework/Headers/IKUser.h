//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IKUser : NSObject
{
    unsigned long long _userID;
    NSString *_username;
    _Bool _subscribed;
}

@property(nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long long userID; // @synthesize userID=_userID;
- (void)dealloc;
- (id)description;
- (id)init;

@end

