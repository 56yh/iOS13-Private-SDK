//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMMessageStatusChatItem.h>

@class IMBalloonPluginDataSource;

@interface IMTranscriptPluginStatusChatItem : IMMessageStatusChatItem
{
    IMBalloonPluginDataSource *_dataSource;
}

@property(readonly, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)_initWithItem:(id)arg1 dataSource:(id)arg2;

@end

