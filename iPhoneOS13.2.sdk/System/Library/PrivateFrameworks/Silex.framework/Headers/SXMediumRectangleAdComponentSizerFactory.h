//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentSizerFactory-Protocol.h>

@class NSString;
@protocol SXAdControllerProvider, SXDOMObjectProviding;

@interface SXMediumRectangleAdComponentSizerFactory : NSObject <SXComponentSizerFactory>
{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXAdControllerProvider> _adControllerProvider;
}

@property(readonly, nonatomic) id <SXAdControllerProvider> adControllerProvider; // @synthesize adControllerProvider=_adControllerProvider;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (id)initWithDOMObjectProvider:(id)arg1 adControllerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

