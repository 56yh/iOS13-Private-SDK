//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WRCannedReply : NSObject
{
    NSString *_text;
    NSString *_defaultReplyText;
    NSString *_defaultReplyKey;
}

@property(retain, nonatomic) NSString *defaultReplyKey; // @synthesize defaultReplyKey=_defaultReplyKey;
@property(retain, nonatomic) NSString *defaultReplyText; // @synthesize defaultReplyText=_defaultReplyText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;

@end

