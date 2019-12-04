//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIRemoteViewController.h>

#import <UIKitCore/_UIScreenRoutePickerRemoteViewControllerHost-Protocol.h>

@class NSExtension, NSString, _UIScreenRoutePickerViewController;
@protocol NSCopying><NSObject;

__attribute__((visibility("hidden")))
@interface _UIScreenRoutePickerRemoteViewController : _UIRemoteViewController <_UIScreenRoutePickerRemoteViewControllerHost>
{
    _UIScreenRoutePickerViewController *_publicController;
    NSExtension *_extension;
    id <NSCopying>nRequestIdentifier;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(copy, nonatomic) id <NSCopying>RequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak _UIScreenRoutePickerViewController *publicController; // @synthesize publicController=_publicController;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_dismissViewController;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

