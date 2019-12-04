//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CNObservable, CNUIImage, CNUILikenessRenderingScope, NSArray, NSString, PRMonogramColor;
@protocol CNKeyDescriptor, CNScheduler;

@protocol CNUILikenessRendering 
+ (id <CNKeyDescriptor>)descriptorForRequiredKeys;
- (CNUIImage *)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNUIImage *)renderedBasicMonogramForString:(NSString *)arg1 color:(PRMonogramColor *)arg2 scope:(CNUILikenessRenderingScope *)arg3 prohibitedSources:(long long)arg4;
- (CNObservable *)renderedBasicMonogramFromString:(CNObservable *)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNObservable *)renderedLikenessesForContacts:(NSArray *)arg1 scope:(CNUILikenessRenderingScope *)arg2 workScheduler:(id <CNScheduler>)arg3;
@end

