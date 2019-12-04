//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ResponseKit/RKText.h>

@class NSDate, NSString, NSUUID;

@interface RKMessage : RKText
{
    NSString *_title;
    NSUUID *_senderUUID;
    NSDate *_dateSent;
    unsigned long long _position;
}

@property(readonly) unsigned long long position; // @synthesize position=_position;
@property(readonly, copy) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(readonly, copy) NSUUID *senderUUID; // @synthesize senderUUID=_senderUUID;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
- (void)annotateRange:(struct _NSRange)arg1 type:(unsigned long long)arg2 field:(unsigned long long)arg3;
- (id)initWithString:(id)arg1 title:(id)arg2 languageIdentifier:(id)arg3 senderUUID:(id)arg4 dateSent:(id)arg5 position:(unsigned long long)arg6;

@end

