//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RemoteUI/RemoteUITableFooter-Protocol.h>

@class NSDictionary, NSString, OBPrivacyLinkController;

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter>
{
    NSDictionary *_attributes;
    OBPrivacyLinkController *_linkController;
}

@property(readonly) OBPrivacyLinkController *linkController; // @synthesize linkController=_linkController;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (void)layoutSubviews;
- (void)configureInPage:(id)arg1;
- (id)initWithAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

