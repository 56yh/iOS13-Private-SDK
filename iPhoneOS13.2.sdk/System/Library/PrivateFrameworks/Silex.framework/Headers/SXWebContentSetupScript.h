//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentScript-Protocol.h>

@class NSString, WKUserScript;

@interface SXWebContentSetupScript : NSObject <SXWebContentScript>
{
    _Bool queueable;
    NSString *executableScript;
}

@property(readonly, nonatomic) _Bool queueable; // @synthesize queueable;
@property(readonly, nonatomic) NSString *executableScript; // @synthesize executableScript;
@property(readonly, nonatomic) WKUserScript *userScript;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

