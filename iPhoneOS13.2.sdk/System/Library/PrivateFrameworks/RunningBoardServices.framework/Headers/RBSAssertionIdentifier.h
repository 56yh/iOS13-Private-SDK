//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>


@class NSString;

@interface RBSAssertionIdentifier : NSObject <BSXPCSecureCoding, NSCopying>
{
    NSString *_desc;
    unsigned long long _hash;
    int _serverPid;
    int _clientPid;
    unsigned long long _count;
}

+ (_Bool)supportsBSXPCSecureCoding;
+ (id)identifierWithClientPid:(int)arg1;
+ (unsigned long long)_next;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) int clientPid; // @synthesize clientPid=_clientPid;
@property(readonly, nonatomic) int serverPid; // @synthesize serverPid=_serverPid;
- (id)_initWithServerPid:(int)arg1 clientPid:(int)arg2 count:(unsigned long long)arg3;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

