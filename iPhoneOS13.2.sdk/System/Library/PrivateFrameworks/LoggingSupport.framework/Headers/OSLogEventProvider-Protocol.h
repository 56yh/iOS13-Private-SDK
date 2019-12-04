//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSString, NSTimeZone, NSUUID, OSLogEventBacktrace, OSLogEventDecomposedMessage;

@protocol OSLogEventProvider
@property(readonly, nonatomic) CDStruct_0dd72924 lossCount;
@property(readonly, nonatomic) struct timezone *lossEndUnixTimeZone;
@property(readonly, nonatomic) struct timeval *lossEndUnixDate;
@property(readonly, nonatomic) unsigned long long lossEndMachContinuousTimestamp;
@property(readonly, nonatomic) struct timezone *lossStartUnixTimeZone;
@property(readonly, nonatomic) struct timeval *lossStartUnixDate;
@property(readonly, nonatomic) unsigned long long lossStartMachContinuousTimestamp;
@property(readonly, nonatomic) unsigned long long creatorProcessUniqueIdentifier;
@property(readonly, nonatomic) unsigned long long creatorActivityIdentifier;
@property(readonly, nonatomic) NSString *signpostName;
@property(readonly, nonatomic) unsigned long long signpostScope;
@property(readonly, nonatomic) unsigned long long signpostType;
@property(readonly, nonatomic) unsigned long long signpostIdentifier;
@property(readonly, nonatomic) OSLogEventDecomposedMessage *decomposedMessage;
@property(readonly, nonatomic) NSString *formatString;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *subsystem;
@property(readonly, nonatomic) OSLogEventBacktrace *backtrace;
@property(readonly, nonatomic) unsigned long long senderImageOffset;
@property(readonly, nonatomic) NSString *sender;
@property(readonly, nonatomic) NSString *senderImagePath;
@property(readonly, nonatomic) const char *senderImageUUIDBytes;
@property(readonly, nonatomic) NSUUID *senderImageUUID;
@property(readonly, nonatomic) NSString *process;
@property(readonly, nonatomic) NSString *processImagePath;
@property(readonly, nonatomic) const char *processImageUUIDBytes;
@property(readonly, nonatomic) NSUUID *processImageUUID;
@property(readonly, nonatomic) unsigned long long machContinuousTimestamp;
@property(readonly, nonatomic) unsigned long long continuousNanosecondsSinceBoot;
@property(readonly, nonatomic) NSUUID *bootUUID;
@property(readonly, nonatomic) unsigned long long transitionActivityIdentifier;
@property(readonly, nonatomic) unsigned long long parentActivityIdentifier;
@property(readonly, nonatomic) unsigned long long activityIdentifier;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, nonatomic) struct timezone *unixTimeZone;
@property(readonly, nonatomic) struct timeval *unixDate;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) unsigned long long threadIdentifier;
@property(readonly, nonatomic) unsigned long long traceIdentifier;
@property(readonly, nonatomic) unsigned long long timeToLive;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) unsigned long long logType;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *composedMessage;
@end

