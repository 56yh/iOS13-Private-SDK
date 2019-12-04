//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKTranscriptBalloonCell.h>

@class CKSpeakerButton;

@interface CKTranscriptSpeakerBalloonCell : CKTranscriptBalloonCell
{
    _Bool _speakerEnabled;
    _Bool _adjustSpeakerForAcknowledgment;
    _Bool _shouldShowText;
    CKSpeakerButton *_speakerButton;
}

@property(nonatomic) _Bool shouldShowText; // @synthesize shouldShowText=_shouldShowText;
@property(retain, nonatomic) CKSpeakerButton *speakerButton; // @synthesize speakerButton=_speakerButton;
@property(nonatomic) _Bool adjustSpeakerForAcknowledgment; // @synthesize adjustSpeakerForAcknowledgment=_adjustSpeakerForAcknowledgment;
@property(nonatomic, getter=isSpeakerEnabled) _Bool speakerEnabled; // @synthesize speakerEnabled=_speakerEnabled;
@property(nonatomic, getter=isSpeakerHidden) _Bool speakerHidden;
- (void)layoutSubviewsForAlignmentContents;
- (void)setOrientation:(BOOL)arg1;

@end

