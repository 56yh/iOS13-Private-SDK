//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRecipient.h>

@class PHMomentShareParticipant;

@interface PXMomentShareParticipantRecipient : PXRecipient
{
    PHMomentShareParticipant *_momentShareParticipant;
}

@property(readonly, nonatomic) PHMomentShareParticipant *momentShareParticipant; // @synthesize momentShareParticipant=_momentShareParticipant;
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;
- (id)initWithMomentShareParticipant:(id)arg1;

@end

