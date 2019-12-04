//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPLinkMetadata, NSAttributedString, NSURL;
@protocol LPLinkMetadataStatusTransformerDelegate;

@interface LPLinkMetadataStatusTransformer : NSObject
{
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    _Bool _wantsStatusItem;
    id <LPLinkMetadataStatusTransformerDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool wantsStatusItem; // @synthesize wantsStatusItem=_wantsStatusItem;
@property(nonatomic) __weak id <LPLinkMetadataStatusTransformerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSURL *canonicalURL;
- (id)originalURL;
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, copy, nonatomic) NSAttributedString *statusText;
- (void)dealloc;
- (id)initWithMetadata:(id)arg1 URL:(id)arg2;

@end

