//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVAccessoryItem-Protocol.h>

@class NSString, UIView;

@interface SVAccessoryItem : NSObject <SVAccessoryItem>
{
    UIView *_view;
    unsigned long long _displayMode;
}

@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

