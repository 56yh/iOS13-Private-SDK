//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUILikenessRendering-Protocol.h>

@class NSString;
@protocol CNSchedulerProvider, CNUIPRLikenessResolver;

@interface _CNUILikenessRenderer : NSObject <CNUILikenessRendering>
{
    id <CNUIPRLikenessResolver> _likenessResolver;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (struct CGImage *)cgImageForLikenessProvider:(id)arg1 pointSize:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4;
+ (id)renderedLikenessesForProviders:(id)arg1 scope:(id)arg2;
+ (id)descriptorForRequiredKeys;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
- (id)renderedLoadingPlaceholderForContactCount:(unsigned long long)arg1 provider:(id)arg2 scope:(id)arg3;
- (id)renderedBasicMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (id)renderedLikenessesForLikenessProviders:(id)arg1 scope:(id)arg2;
- (id)likenessProvidersForContacts:(id)arg1 likenessResolverOptions:(id)arg2 workScheduler:(id)arg3;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (id)initWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

