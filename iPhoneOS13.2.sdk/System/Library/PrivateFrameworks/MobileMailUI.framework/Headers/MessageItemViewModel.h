//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileMailUI/MessageItemViewModelBuilder-Protocol.h>

@class NSDate, NSIndexSet, NSString;

@interface MessageItemViewModel : NSObject <MessageItemViewModelBuilder>
{
    _Bool _read;
    _Bool _flagged;
    _Bool _replied;
    _Bool _forwarded;
    _Bool _VIP;
    _Bool _notify;
    _Bool _mute;
    _Bool _blockedSender;
    _Bool _hasAttachments;
    NSIndexSet *_flagColors;
    NSDate *_dateReceived;
}

@property(copy, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(nonatomic) _Bool hasAttachments; // @synthesize hasAttachments=_hasAttachments;
@property(nonatomic, getter=isBlockedSender) _Bool blockedSender; // @synthesize blockedSender=_blockedSender;
@property(nonatomic, getter=isMute) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic, getter=isNotify) _Bool notify; // @synthesize notify=_notify;
@property(nonatomic, getter=isVIP) _Bool VIP; // @synthesize VIP=_VIP;
@property(nonatomic, getter=isForwarded) _Bool forwarded; // @synthesize forwarded=_forwarded;
@property(nonatomic, getter=isReplied) _Bool replied; // @synthesize replied=_replied;
@property(copy, nonatomic) NSIndexSet *flagColors; // @synthesize flagColors=_flagColors;
@property(nonatomic, getter=isFlagged) _Bool flagged; // @synthesize flagged=_flagged;
@property(nonatomic, getter=isRead) _Bool read; // @synthesize read=_read;
- (id)initWithItemBuilder:(id /* block */)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

