//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSOneTimeCode : NSObject
{
    NSString *_code;
    NSString *_displayCode;
    NSString *_guid;
    NSString *_handle;
    NSDate *_timeStamp;
}

@property(readonly, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, copy, nonatomic) NSString *displayCode; // @synthesize displayCode=_displayCode;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

