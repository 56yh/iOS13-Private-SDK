//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface PKUniqueAddressField : NSObject
{
    NSString *_key;
    long long _index;
    NSError *_error;
    NSString *_invalidText;
}

@property(retain, nonatomic) NSString *invalidText; // @synthesize invalidText=_invalidText;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;

@end

