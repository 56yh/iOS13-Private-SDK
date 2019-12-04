//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXContentScaleManager-Protocol.h>

@class NSString;
@protocol SXContentScaleManagerDelegate;

@interface SXContentScaleManager : NSObject <SXContentScaleManager>
{
    long long _contentScale;
    double _contentScaleFactor;
    id <SXContentScaleManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <SXContentScaleManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor=_contentScaleFactor;
@property(nonatomic) long long contentScale; // @synthesize contentScale=_contentScale;
- (void)reset;
- (void)decrease;
- (void)increase;
- (id)initWithContentScale:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

