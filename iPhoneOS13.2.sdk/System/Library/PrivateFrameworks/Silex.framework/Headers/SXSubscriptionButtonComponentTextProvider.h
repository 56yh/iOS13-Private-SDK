//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXButtonComponentTextProvider-Protocol.h>

@class NSString;
@protocol SXSubscriptionButtonTextProviding;

@interface SXSubscriptionButtonComponentTextProvider : NSObject <SXButtonComponentTextProvider>
{
    id <SXSubscriptionButtonTextProviding> _textProvider;
}

@property(readonly, nonatomic) id <SXSubscriptionButtonTextProviding> textProvider; // @synthesize textProvider=_textProvider;
- (id)buttonText;
- (id)initWithTextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

