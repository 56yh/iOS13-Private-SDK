//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CCUIStatusUpdate : NSObject
{
    NSString *_message;
    unsigned long long _type;
}

+ (id)statusUpdateWithMessage:(id)arg1 type:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (id)_initWithMessage:(id)arg1 type:(unsigned long long)arg2;

@end

