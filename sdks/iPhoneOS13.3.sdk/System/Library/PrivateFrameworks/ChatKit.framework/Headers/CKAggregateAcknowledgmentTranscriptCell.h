//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAssociatedMessageTranscriptCell.h>

@class CKAcknowledgmentBalloonView;

@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell
{
    BOOL _parentMessageIsFromMe;
}

@property(nonatomic) BOOL parentMessageIsFromMe; // @synthesize parentMessageIsFromMe=_parentMessageIsFromMe;
- (void)prepareForReuse;
- (void)performInsertion:(id /* CDUnknownBlockType */)arg1;
- (void)layoutSubviewsForAlignmentContents;
@property(retain, nonatomic) CKAcknowledgmentBalloonView *balloonView;
- (void)configureForChatItem:(id)arg1;

@end

