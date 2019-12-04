//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTSource-Protocol.h>

@class NSDate, NSString, NSXPCConnection;

@interface MTXPCClientInfo : NSObject <MTSource>
{
    NSXPCConnection *_connection;
    id _clientLink;
    NSDate *_connectedDate;
}

+ (id)clientInfoForConnection:(id)arg1 clientLink:(id)arg2;
@property(retain, nonatomic) NSDate *connectedDate; // @synthesize connectedDate=_connectedDate;
@property(retain, nonatomic) id clientLink; // @synthesize clientLink=_clientLink;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)donatesIntent;
- (id)sourceIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) int processID;
@property(readonly, copy, nonatomic) NSString *processName;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1 clientLink:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

