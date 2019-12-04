//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFullscreenCaptionViewFactory-Protocol.h>

@class NSString;
@protocol SXComponentActionHandler, SXTextSourceFactory;

@interface SXFullscreenCaptionViewFactory : NSObject <SXFullscreenCaptionViewFactory>
{
    id <SXTextSourceFactory> _textSourceFactory;
    id <SXComponentActionHandler> _actionHandler;
}

@property(readonly, nonatomic) id <SXComponentActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) id <SXTextSourceFactory> textSourceFactory; // @synthesize textSourceFactory=_textSourceFactory;
- (id)createCaptionView;
- (id)initWithTextSourceFactory:(id)arg1 actionHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

