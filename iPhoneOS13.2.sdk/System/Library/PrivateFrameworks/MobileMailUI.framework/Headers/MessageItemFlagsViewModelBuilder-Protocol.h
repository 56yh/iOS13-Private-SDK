//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSIndexSet;

@protocol MessageItemFlagsViewModelBuilder 
@property(nonatomic, getter=isMute) _Bool mute;
@property(nonatomic, getter=isNotify) _Bool notify;
@property(nonatomic, getter=isVIP) _Bool VIP;
@property(nonatomic, getter=isForwarded) _Bool forwarded;
@property(nonatomic, getter=isReplied) _Bool replied;
@property(copy, nonatomic) NSIndexSet *flagColors;
@property(nonatomic, getter=isFlagged) _Bool flagged;
@property(nonatomic, getter=isRead) _Bool read;
@end

