//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol AUPBInspecting;

__attribute__((visibility("hidden")))
@interface AUPBClientConnection : NSObject
{
    NSXPCConnection *xpcconnection;
    id <AUPBInspecting> proxyInterface;
}

@property(retain, nonatomic) id <AUPBInspecting> proxyInterface; // @synthesize proxyInterface;
@property(retain, nonatomic) NSXPCConnection *xpcconnection; // @synthesize xpcconnection;

@end

