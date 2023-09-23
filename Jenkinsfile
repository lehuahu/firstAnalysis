pipeline {
  agent any
  stages {
    stage('git') {
      steps {
        git(url: 'https://github.com/lehuahu/firstAnalysis.git', branch: 'master', poll: true)
      }
    }

    stage('print') {
      steps {
        sh 'echo "hello world"'
      }
    }

  }
}