//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSString;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem
{
    IMHandle *_sender;
}

@property(readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
@property(readonly, copy, nonatomic) NSString *title;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

