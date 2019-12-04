//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDOMModificationContextFactory-Protocol.h>

@class NSString;
@protocol SXDocumentProviding;

@interface SXDOMModificationContextFactory : NSObject <SXDOMModificationContextFactory>
{
    id <SXDocumentProviding> _documentProvider;
}

@property(readonly, nonatomic) id <SXDocumentProviding> documentProvider; // @synthesize documentProvider=_documentProvider;
- (id)createModificationContextWithLayoutOptions:(id)arg1;
- (id)initWithDocumentProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

