#import <Foundation/Foundation.h>
#import "GLUCEditorViewController.h"
#import "GLUCReading.h"

static NSString *const kGLUCReadingEditorTableViewCellIdentifier = @"ReadingEditorTableViewCell";

@interface GLUCReadingEditorViewController : GLUCEditorViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, readwrite, strong) IBOutlet UITableView *editorTableView;
@property (nonatomic, readwrite, strong) IBOutlet UITextField *valueField;
@property (nonatomic, readwrite, strong) GLUCReading *editedObject;

@end